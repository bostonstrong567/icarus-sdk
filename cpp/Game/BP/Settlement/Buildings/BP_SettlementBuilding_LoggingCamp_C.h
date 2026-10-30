// /Game/BP/Settlement/Buildings/BP_SettlementBuilding_LoggingCamp.BP_SettlementBuilding_LoggingCamp_C
// Derives from: ABP_SettlementBuilding_C > ASettlementBuilding > AIcarusActor > AActor > UObject
// size 0x50C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SettlementBuilding_LoggingCamp_C : public ABP_SettlementBuilding_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Proxy_4;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Proxy_3;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Proxy_2;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Proxy_1;  // 0x04F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaProduction;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WoodProductionPerDayPerNPC;  // 0x0504, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistanceToNearestTree;  // 0x0508, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanConstructBuildingAtLocation(UObject* WorldContextObject, const FVector& Location, const FRotator& Rotation, FText& FailureReason) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void TickActiveBuilding(float ProspectTimeDelta);  // parameters 0x4
};
