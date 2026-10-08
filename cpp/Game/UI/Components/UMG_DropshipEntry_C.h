// /Game/UI/Components/UMG_DropshipEntry.UMG_DropshipEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3A9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropshipEntry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropshipPartSmall_C* Bot;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Content;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DropshipName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InUse;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropshipPartSmall_C* Mid;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NameBorder;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropshipPartSmall_C* Top;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDropshipSelected DropshipSelected;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropship Dropship;  // 0x02C8, size 0xE0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSelected;  // 0x03A8, size 0x1

    UFUNCTION() void BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DropshipSelected__DelegateSignature(int32 Index);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_UMG_DropshipEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDropship(FDropship Dropship, bool Valid);  // parameters 0xE1
    UFUNCTION(BlueprintCallable) void SetSelected(bool Selected);  // parameters 0x1
};
