// /Game/UI/Components/UMG_FaceIcon.UMG_FaceIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FaceIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFaceShapes> ChosenFace;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EFaceShapes>, TSoftObjectPtr<UTexture2D>> FaceToIcon;  // 0x0278, size 0x50

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FaceIcon(int32 EntryPoint);  // parameters 0x4
};
