// /Game/BP/Settlement/Buildings/BP_SettlementBuilding_Farm.BP_SettlementBuilding_Farm_C
// Derives from: ABP_SettlementBuilding_C > ASettlementBuilding > AIcarusActor > AActor > UObject
// size 0x510, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SettlementBuilding_Farm_C : public ABP_SettlementBuilding_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_10;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_9;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_8;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_7;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_6;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_5;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_4;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_3;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_2;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Carrots_1;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInstancedStaticMeshComponent* ISM_Mounds;  // 0x0508, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SettlementBuilding_Farm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnTerrainAnchorStateChanged();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetupRandomCropLocations();
};
