// /Game/BP/Quests/UMG_QuestHelper.UMG_QuestHelper_C
// Derives from: UUMG_WidgetHighlightBase_C > UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QuestHelper_C : public UUMG_WidgetHighlightBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* PulsingAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_35;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* MainGlowRetainer;  // 0x0290, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_QuestHelper(int32 EntryPoint);  // parameters 0x4
};
