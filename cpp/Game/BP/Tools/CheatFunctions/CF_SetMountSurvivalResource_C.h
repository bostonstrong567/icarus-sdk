// /Game/BP/Tools/CheatFunctions/CF_SetMountSurvivalResource.CF_SetMountSurvivalResource_C
// Derives from: UCF_BaseComboInteger_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x319, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SetMountSurvivalResource_C : public UCF_BaseComboInteger_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESurvivalConsumableType Enum_Value;  // 0x0318, size 0x1, named "Enum Value"

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_SetMountSurvivalResource(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Handle_Execute(UUserWidget* Widget, int32 Amount);  // parameters 0xC, named "Handle Execute"
};
