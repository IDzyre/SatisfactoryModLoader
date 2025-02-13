// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableCircuitBridge.h"
#include "Net/UnrealNetwork.h"

AFGBuildableCircuitBridge::AFGBuildableCircuitBridge() : Super() {
	this->mIsBridgeConnected = false;
}
void AFGBuildableCircuitBridge::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableCircuitBridge, mIsBridgeConnected);
}
void AFGBuildableCircuitBridge::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableCircuitBridge::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
bool AFGBuildableCircuitBridge::IsBridgeConnected() const{ return bool(); }
void AFGBuildableCircuitBridge::CalculateBridgeConnected(){ }
int32 AFGBuildableCircuitBridge::GetCircuitID0() const{ return int32(); }
int32 AFGBuildableCircuitBridge::GetCircuitID1() const{ return int32(); }
void AFGBuildableCircuitBridge::OnCircuitGroupCreated(){ }
void AFGBuildableCircuitBridge::OnCircuitsRebuilt(){ }
