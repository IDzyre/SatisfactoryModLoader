// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePassthroughPipeHyper.h"
#include "Components/SceneComponent.h"
#include "FGPipeConnectionComponentHyper.h"

AFGBuildablePassthroughPipeHyper::AFGBuildablePassthroughPipeHyper() : Super() {
	this->mConnection0 = CreateDefaultSubobject<UFGPipeConnectionComponentHyper>(TEXT("Connection0"));
	this->mConnection1 = CreateDefaultSubobject<UFGPipeConnectionComponentHyper>(TEXT("Connection1"));
	this->mConnection0->SetupAttachment(RootComponent);
	this->mConnection1->SetupAttachment(RootComponent);
}
void AFGBuildablePassthroughPipeHyper::BeginPlay(){ Super::BeginPlay(); }
TArray<TPair<UFGPipeConnectionComponentBase*, float>> AFGBuildablePassthroughPipeHyper::GetPossibleConnectionsToTransitionThrough(AFGCharacterPlayer* charPlayer, UFGPipeConnectionComponentBase* connectionEnteredThrough) const{ return TArray<TPair<UFGPipeConnectionComponentBase*,float>>(); }
EPipeHyperEnterResult AFGBuildablePassthroughPipeHyper::OnPipeEnterReal(AFGCharacterPlayer* charPlayer, UFGPipeConnectionComponentBase* connectionEnteredThrough, TStructOnScope<FFGPipeHyperBasePipeData>& outPipeData, const TStructOnScope<FFGPipeHyperBasePipeData>& predictionPipeData){ return EPipeHyperEnterResult(); }
bool AFGBuildablePassthroughPipeHyper::FindDistanceClosestToWorldLocation(AFGCharacterPlayer* charPlayer, const FVector& worldLocation, const FVector& velocity, TStructOnScope<FFGPipeHyperBasePipeData>& out_pipeData, float& out_distance) const{ return bool(); }
float AFGBuildablePassthroughPipeHyper::GetLengthAlongPipe(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData){ return float(); }
void AFGBuildablePassthroughPipeHyper::GetLocationAndRotationAlongPipe(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData, float distance, FVector& outLocation, FVector& outDirection){ }
UFGPipeConnectionComponentBase* AFGBuildablePassthroughPipeHyper::GetConnectionToTransitThrough(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData, float distance, float& outExitOffset){ return nullptr; }
