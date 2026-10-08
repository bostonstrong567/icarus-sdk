// /Game/UI/Spectator/W_PostProcessEntry_Checkbox_Radio.W_PostProcessEntry_Checkbox_Radio_C
// Derives from: UW_PostProcessEntry_Checkbox_C > UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2E1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_PostProcessEntry_Checkbox_Radio_C : public UW_PostProcessEntry_Checkbox_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ParentHasValidCheckedButton;  // 0x02E0, size 0x1

    UFUNCTION() void ExecuteUbergraph_W_PostProcessEntry_Checkbox_Radio(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnCheckedStatedUpdated();
};
