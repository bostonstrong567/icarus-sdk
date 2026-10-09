// /Script/UMG.WidgetComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x5A0, declared in Engine/Source/Runtime/UMG/Public/Components/WidgetComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UWidgetComponent : public UMeshComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) EWidgetSpace Space;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere) EWidgetTimingPolicy TimingPolicy;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UUserWidget> WidgetClass;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere) FIntPoint DrawSize;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere) bool bManuallyRedraw;  // 0x0490, size 0x1
    UPROPERTY() bool bRedrawRequested;  // 0x0491, size 0x1
    UPROPERTY(EditAnywhere) float RedrawTime;  // 0x0494, size 0x4
    double LastWidgetRenderTime;  // 0x0498, not reflected
    UPROPERTY() FIntPoint CurrentDrawSize;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere) bool bDrawAtDesiredSize;  // 0x04A8, size 0x1
    UPROPERTY(EditAnywhere) FVector2D Pivot;  // 0x04AC, size 0x8
    UPROPERTY(EditAnywhere) bool bReceiveHardwareInput;  // 0x04B4, size 0x1
    UPROPERTY(EditAnywhere) bool bWindowFocusable;  // 0x04B5, size 0x1
    UPROPERTY(EditAnywhere) EWindowVisibility WindowVisibility;  // 0x04B6, size 0x1
    UPROPERTY(EditAnywhere) bool bApplyGammaCorrection;  // 0x04B7, size 0x1
    UPROPERTY() ULocalPlayer* OwnerPlayer;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere) FLinearColor BackgroundColor;  // 0x04C0, size 0x10
    UPROPERTY(EditAnywhere) FLinearColor TintColorAndOpacity;  // 0x04D0, size 0x10
    UPROPERTY(EditAnywhere) float OpacityFromTexture;  // 0x04E0, size 0x4
    UPROPERTY(EditAnywhere) EWidgetBlendMode BlendMode;  // 0x04E4, size 0x1
    UPROPERTY(EditAnywhere) bool bIsTwoSided;  // 0x04E5, size 0x1
    UPROPERTY(EditAnywhere) bool TickWhenOffscreen;  // 0x04E6, size 0x1
    UPROPERTY(Transient) UBodySetup* BodySetup;  // 0x04E8, size 0x8
    UPROPERTY() UMaterialInterface* TranslucentMaterial;  // 0x04F0, size 0x8
    UPROPERTY() UMaterialInterface* TranslucentMaterial_OneSided;  // 0x04F8, size 0x8
    UPROPERTY() UMaterialInterface* OpaqueMaterial;  // 0x0500, size 0x8
    UPROPERTY() UMaterialInterface* OpaqueMaterial_OneSided;  // 0x0508, size 0x8
    UPROPERTY() UMaterialInterface* MaskedMaterial;  // 0x0510, size 0x8
    UPROPERTY() UMaterialInterface* MaskedMaterial_OneSided;  // 0x0518, size 0x8
    UPROPERTY(Transient) UTextureRenderTarget2D* RenderTarget;  // 0x0520, size 0x8
    UPROPERTY(Transient) UMaterialInstanceDynamic* MaterialInstance;  // 0x0528, size 0x8
    UPROPERTY(Transient) bool bAddedToScreen;  // 0x0530, size 0x1
    UPROPERTY() bool bEditTimeUsable;  // 0x0531, size 0x1
    UPROPERTY(EditAnywhere) FName SharedLayerName;  // 0x0534, size 0x8
    UPROPERTY(EditAnywhere) int32 LayerZOrder;  // 0x053C, size 0x4
    UPROPERTY(EditAnywhere) EWidgetGeometryMode GeometryMode;  // 0x0540, size 0x1
    UPROPERTY(EditAnywhere) float CylinderArcAngle;  // 0x0544, size 0x4
    UPROPERTY(EditAnywhere) ETickMode TickMode;  // 0x0548, size 0x1
    TSharedPtr<SVirtualWindow,0> SlateWindow;  // 0x0550, not reflected
    FVector2D LastLocalHitLocation;  // 0x0560, not reflected
    FWidgetRenderer * WidgetRenderer;  // 0x0568, not reflected
private:
    UPROPERTY(Transient, Instanced) UUserWidget* Widget;  // 0x0570, size 0x8
    TSharedPtr<SWidget,0> SlateWidget;  // 0x0578, not reflected
    TWeakPtr<SWidget,0> CurrentSlateWidget;  // 0x0588, not reflected
    bool bRenderCleared;  // 0x0598, not reflected
    bool bOnWidgetVisibilityChangedRegistered;  // 0x0599, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetCurrentDrawSize() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCylinderArcAngle() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDrawAtDesiredSize() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetDrawSize() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) EWidgetGeometryMode GetGeometryMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetManuallyRedraw() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInstanceDynamic* GetMaterialInstance() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) ULocalPlayer* GetOwnerPlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetPivot() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRedrawTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UTextureRenderTarget2D* GetRenderTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetTickWhenOffscreen() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetTwoSided() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) UUserWidget* GetUserWidgetObject() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UUserWidget* GetWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) EWidgetSpace GetWidgetSpace() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetWindowFocusable() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EWindowVisibility GetWindowVisiblility() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsWidgetVisible() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RequestRedraw();
    UFUNCTION(BlueprintCallable) void RequestRenderUpdate();
    UFUNCTION(BlueprintCallable) void SetBackgroundColor(FLinearColor NewBackgroundColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetCylinderArcAngle(float InCylinderArcAngle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDrawSize(FVector2D Size);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetGeometryMode(EWidgetGeometryMode InGeometryMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetManuallyRedraw(bool bUseManualRedraw);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOwnerPlayer(ULocalPlayer* LocalPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPivot(const FVector2D& InPivot);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRedrawTime(float InRedrawTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTickMode(ETickMode InTickMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetTwoSided(bool bWantTwoSided);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWidget(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetWidgetSpace(EWidgetSpace NewSpace);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWindowFocusable(bool bInWindowFocusable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWindowVisibility(EWindowVisibility InVisibility);  // parameters 0x1

    // Virtual functions that start here:
    //   DrawWidgetToRenderTarget, GetLocalHitLocation, GetWidget, InitWidget, ModifyProjectedLocalPosition
    //   ReleaseResources, RequestRedraw, RequestRenderUpdate, SetSlateWidget, SetWidget, ShouldDrawWidget
    //   UpdateRenderTarget, UpdateWidget
};
