// /Script/Engine.HUD
// Derives from: AActor > UObject
// size 0x310, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/HUD.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AHUD : public AActor
{
public:
    UPROPERTY(BlueprintReadOnly) APlayerController* PlayerOwner;  // 0x0220, size 0x8
    UPROPERTY(BlueprintReadOnly) uint8 bLostFocusPaused : 1;  // 0x0228, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShowHUD : 1;  // 0x0228, mask 0x02
    UPROPERTY(BlueprintReadWrite) uint8 bShowDebugInfo : 1;  // 0x0228, mask 0x04
    UPROPERTY(Transient) int32 CurrentTargetIndex;  // 0x022C, size 0x4
    UPROPERTY(BlueprintReadWrite) uint8 bShowHitBoxDebugInfo : 1;  // 0x0230, mask 0x01
    UPROPERTY(BlueprintReadWrite) uint8 bShowOverlays : 1;  // 0x0230, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableDebugTextShadow : 1;  // 0x0230, mask 0x04
    UPROPERTY() TArray<AActor*> PostRenderedActors;  // 0x0238, size 0x10
    UPROPERTY(Config) TArray<FName> DebugDisplay;  // 0x0250, size 0x10
    UPROPERTY(Config) TArray<FName> ToggledDebugCategories;  // 0x0260, size 0x10
    UPROPERTY() UCanvas* Canvas;  // 0x0270, size 0x8
    UPROPERTY() UCanvas* DebugCanvas;  // 0x0278, size 0x8
    UPROPERTY() TArray<FDebugTextInfo> DebugTextList;  // 0x0280, size 0x10
    UPROPERTY() TSubclassOf<AActor> ShowDebugTargetDesiredClass;  // 0x0290, size 0x8
    UPROPERTY() AActor* ShowDebugTargetActor;  // 0x0298, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bShowDebugForReticleTarget;  // 0x0230, private
    float LastHUDRenderTime;  // 0x0248
    float RenderDelta;  // 0x024C
    TArray<FHUDHitBox,TSizedDefaultAllocator<32> > HitBoxMap;  // 0x02A0
    TArray<FHUDHitBox *,TSizedDefaultAllocator<32> > HitBoxHits;  // 0x02B0
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> HitBoxesOver;  // 0x02C0

    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void AddDebugText(FString DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow);  // parameters 0x4D
    UFUNCTION(BlueprintCallable) void AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32 Priority);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void Deproject(float ScreenX, float ScreenY, FVector& WorldPosition, FVector& WorldDirection) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void DrawMaterial(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void DrawMaterialSimple(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void DrawMaterialTriangle(UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color);  // parameters 0x68
    UFUNCTION(BlueprintCallable) void DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void DrawText(FString Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale, bool bScalePosition);  // parameters 0x35
    UFUNCTION(BlueprintCallable) void DrawTexture(UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void DrawTextureSimple(UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActorsInSelectionRectangle(TSubclassOf<AActor> ClassFilter, const FVector2D& FirstPoint, const FVector2D& SecondPoint, TArray<AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);  // parameters 0x2A
    UFUNCTION(BlueprintCallable, BlueprintPure) APawn* GetOwningPawn() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) APlayerController* GetOwningPlayerController() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTextSize(FString Text, float& OutWidth, float& OutHeight, UFont* Font, float Scale) const;  // parameters 0x24
    UFUNCTION(Exec) void NextDebugTarget();
    UFUNCTION(Exec) void PreviousDebugTarget();
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector Project(FVector Location) const;  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void ReceiveDrawHUD(int32 SizeX, int32 SizeY);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void ReceiveHitBoxBeginCursorOver(FName BoxName);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void ReceiveHitBoxClick(FName BoxName);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void ReceiveHitBoxEndCursorOver(FName BoxName);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void ReceiveHitBoxRelease(FName BoxName);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void RemoveAllDebugStrings();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText);  // parameters 0x9
    UFUNCTION(Exec) void ShowDebug(FName DebugType);  // parameters 0x8
    UFUNCTION(Exec) void ShowDebugForReticleTargetToggle(TSubclassOf<AActor> DesiredClass);  // parameters 0x8
    UFUNCTION(Exec) void ShowDebugToggleSubCategory(FName Category);  // parameters 0x8
    UFUNCTION(Exec) void ShowHUD();

    // Virtual functions that start here:
    //   AddPostRenderedActor, DrawActorOverlays, DrawHUD, DrawSafeZoneOverlay, GetCurrentDebugTargetActor
    //   GetDebugActorList, GetFontFromSizeIndex, HandleBugScreenShot, NextDebugTarget
    //   NotifyBindPostProcessEffects, NotifyHitBoxBeginCursorOver, NotifyHitBoxClick
    //   NotifyHitBoxEndCursorOver, NotifyHitBoxRelease, OnLostFocusPause, PostRender, PreviousDebugTarget
    //   RemovePostRenderedActor, ShouldDisplayDebug, ShowDebug, ShowDebugInfo, ShowHUD
};
