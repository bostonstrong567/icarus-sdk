// /Game/BP/Player/BP_SurvivalMetaController.BP_SurvivalMetaController_C
// Derives from: UActorComponent > UObject
// size 0x179, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SurvivalMetaController_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMissionReport MissionReport;  // 0x00B8, size 0xC0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasReceivedMissionReport;  // 0x0178, size 0x1

    UFUNCTION(BlueprintCallable, Client, Reliable) void ClientReceiveMissionReport(FMissionReport Report);  // parameters 0xC0
    UFUNCTION() void ExecuteUbergraph_BP_SurvivalMetaController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMetaItemsAndResources(TArray<FItemData>& MetaItems, TArray<FMetaResource>& MetaResources) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOwningController(ABP_IcarusPlayerControllerSurvival_C*& Controller) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LeaveByDropship_ShowMissionReport();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerRequestMissionReport();
};
