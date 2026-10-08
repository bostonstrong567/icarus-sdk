// /Game/BP/Objects/World/Items/Deployables/Decorations/Paintings/UMG_Painting_Display.UMG_Painting_Display_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Painting_Display_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Icon;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPaintingsRowHandle CurrentPaintingRow;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Painting_Size;  // 0x0288, size 0x8, named "Painting Size"

    UFUNCTION() void ExecuteUbergraph_UMG_Painting_Display(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSmallPainting(AActor* LinkedActor);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdatePaintingDisplay(FPaintingsRowHandle PaintingRow, AActor* LinkedActor);  // parameters 0x20
};
