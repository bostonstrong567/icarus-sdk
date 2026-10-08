// /Game/BP/Tools/CheatFunctions/CF_UnlockAllProspects.CF_UnlockAllProspects_C
// Derives from: UCF_BaseCombo_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_UnlockAllProspects_C : public UCF_BaseCombo_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSubclassOf<UTalentControllerComponent>> TalentControllerClasses;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString TalentContext;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle UnlockTalentRow;  // 0x0320, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentTreesEnum TalentTreesEnum;  // 0x0338, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_UnlockAllProspects(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindTalentModelData(FTalentsRowHandle TalentRow, bool& Found, FTalentModelData& TalentModelData);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void GetAllTalentRowHandlesOfType(FTalentTreesEnum TalentTreeEnum, TArray<FTalentsRowHandle>& Rows);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void HandleExecute(UUserWidget* Widget, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnConstruction();
    UFUNCTION(BlueprintCallable) void OnTalentsSynced();
    UFUNCTION(BlueprintCallable) void TryUnlockAllProspectTalents(FTalentTreesEnum Enum);  // parameters 0x10
};
