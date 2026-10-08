// /Game/BP/Quests/UMG_QuestWidget.UMG_QuestWidget_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QuestWidget_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconImage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* IconScaleBox;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WorldSpaceCenter;  // 0x0298, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WorldSpaceSize;  // 0x02A4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* QuestRef;  // 0x02B0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_QuestWidget(int32 EntryPoint);  // parameters 0x4
};
