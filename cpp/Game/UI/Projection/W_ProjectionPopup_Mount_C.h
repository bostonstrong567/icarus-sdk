// /Game/UI/Projection/W_ProjectionPopup_Mount.W_ProjectionPopup_Mount_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_Mount_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DirectionArrow;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PlayerIcon;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Symbol;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Icon;  // 0x02D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_Mount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsAlive(bool& Alive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickEdgeScreen(FVector2D DirFromCentre);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateEdgeScreen(bool AtEdge);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateImage(UTexture2D* Texture);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateName();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
