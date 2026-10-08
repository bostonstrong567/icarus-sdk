// /Game/BP/Settlement/Buildings/BP_SettlementBuilding_LoggingCamp.BP_SettlementBuilding_LoggingCamp_C
// Derives from: ABP_SettlementBuilding_C > ASettlementBuilding > AIcarusActor > AActor > UObject
// size 0x4DC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SettlementBuilding_LoggingCamp_C : public ABP_SettlementBuilding_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Proxy_4;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Proxy_3;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Proxy_2;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Proxy_1;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaProduction;  // 0x04D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WoodProductionPerDayPerNPC;  // 0x04D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistanceToNearestTree;  // 0x04D8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanConstructBuildingAtLocation(UObject* WorldContextObject, const FVector& Location, const FRotator& Rotation, FText& FailureReason) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void TickActiveBuilding(float ProspectTimeDelta);  // parameters 0x4
};
