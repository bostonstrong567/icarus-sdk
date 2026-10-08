// /Game/BP/Tools/CheatFunctions/CF_BestiaryKills.CF_BestiaryKills_C
// Derives from: UCF_BaseComboInteger_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BestiaryKills_C : public UCF_BaseComboInteger_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_BestiaryKills(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Handle_Execute(UUserWidget* Widget, int32 Amount);  // parameters 0xC, named "Handle Execute"
    UFUNCTION(BlueprintCallable) void Handle_On_Item_Set(UUserWidget* Widget);  // parameters 0x8, named "Handle On Item Set"
    UFUNCTION(BlueprintCallable) void OnConstruction();
};
