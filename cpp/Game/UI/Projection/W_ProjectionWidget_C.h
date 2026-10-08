// /Game/UI/Projection/W_ProjectionWidget.W_ProjectionWidget_C
// Derives from: UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2AD, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionWidget_C : public UHuntingWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MinSize;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MaxSize;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SizeDistanceStart;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SizeDistanceEnd;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_C* ProjectionActor;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Alignment;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D CachedSize;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseAutoSizing;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinAutoSize;  // 0x029C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAutoSize;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseScreenEdge;  // 0x02A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScreenEdgeBuffer;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAtEdge;  // 0x02AC, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionWidget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOpacityDistanceRanges(float& NearbyDistanceStart, float& NearbyDistanceEnd) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetOverridePlacement(FVector2D& Location, float& ScaleAlpha, FVector2D& Alignment, bool& UseOpacity);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void RemoveWidget();
    UFUNCTION(BlueprintCallable) void Set_Scale(float Scale);  // parameters 0x4, named "Set Scale"
    UFUNCTION(BlueprintCallable) void SetProjectionActor(UBP_UIProjectionComponent_C* ProjectionActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldUseOverride();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickEdgeScreen(FVector2D DirFromCentre);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateEdgeScreen(bool AtEdge);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateOpacityForDistance(float DistanceToActor, float OverrideValue);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
