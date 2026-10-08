// /Game/BP/Tools/CheatFunctions/CF_UnlockTalent_Base.CF_UnlockTalent_Base_C
// Derives from: UCF_BaseComboInteger_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x350, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_UnlockTalent_Base_C : public UCF_BaseComboInteger_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSubclassOf<UTalentControllerComponent>> TalentControllerClasses;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString TalentContext;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle UnlockTalentRow;  // 0x0338, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanModifyNumber();  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_UnlockTalent_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindTalentModelData(FTalentsRowHandle TalentRow, bool& Found, FTalentModelData& TalentModelData);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void GetAllTalentRowHandles(TArray<FTalentsRowHandle>& Rows);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Handle_Execute(UUserWidget* Widget, int32 Amount);  // parameters 0xC, named "Handle Execute"
    UFUNCTION(BlueprintCallable) void Handle_On_Item_Set(UUserWidget* Widget);  // parameters 0x8, named "Handle On Item Set"
    UFUNCTION(BlueprintCallable) void OnTalentsSynced();
    UFUNCTION(BlueprintCallable) void TryUnlockTalent(FTalentsRowHandle Talent);  // parameters 0x18
};
