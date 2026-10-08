// /Game/UI/Projection/W_ProjectionPopup_Player.W_ProjectionPopup_Player_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_Player_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HostIcon;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_115;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PlayerIcon;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Icon;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APlayerState* Player_State;  // 0x02D8, size 0x8, named "Player State"

    UFUNCTION(BlueprintCallable, BlueprintPure) void IsAlive(bool& Alive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickEdgeScreen(FVector2D DirFromCentre);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateEdgeScreen(bool AtEdge);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateHostImage();
    UFUNCTION(BlueprintCallable) void UpdateImage(UTexture2D* Texture);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
