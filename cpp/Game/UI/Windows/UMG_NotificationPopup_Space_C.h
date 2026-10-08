// /Game/UI/Windows/UMG_NotificationPopup_Space.UMG_NotificationPopup_Space_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NotificationPopup_Space_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ConceptImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* ConceptRetainer;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* GoToWorkshopButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* MessageText;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* OuterVerticalBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* t;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* t2;  // 0x02A8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_NotificationPopup_Space(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize();
};
