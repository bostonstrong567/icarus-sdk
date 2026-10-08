// /Game/BP/Settlement/Buildings/BP_SettlementBuilding_FishingDock.BP_SettlementBuilding_FishingDock_C
// Derives from: ABP_SettlementBuilding_C > ASettlementBuilding > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SettlementBuilding_FishingDock_C : public ABP_SettlementBuilding_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* FishingSpot;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BuildingCheck_InWater;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BuildingCheck_OnLand;  // 0x04C8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanConstructBuildingAtLocation(UObject* WorldContextObject, const FVector& Location, const FRotator& Rotation, FText& FailureReason) const;  // parameters 0x39
    UFUNCTION() void ExecuteUbergraph_BP_SettlementBuilding_FishingDock(int32 EntryPoint);  // parameters 0x4
};
