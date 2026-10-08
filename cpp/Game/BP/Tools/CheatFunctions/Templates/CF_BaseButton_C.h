// /Game/BP/Tools/CheatFunctions/Templates/CF_BaseButton.CF_BaseButton_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BaseButton_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton_2;  // 0x02E8, size 0x8

    UFUNCTION() void BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_CF_BaseButton(int32 EntryPoint);  // parameters 0x4
};
