// /Game/UI/Components/UMG_AttachmentIcon.UMG_AttachmentIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x29C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AttachmentIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0270, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ImageSize;  // 0x0298, size 0x4

    UFUNCTION(BlueprintCallable) void AddPopup(FText Name);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_AttachmentIcon(int32 EntryPoint);  // parameters 0x4
};
