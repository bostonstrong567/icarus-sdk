// /Script/UMG.UserWidget
// Derives from: UWidget > UVisual > UObject
// size 0x260, declared in Engine/Source/Runtime/UMG/Public/Blueprint/UserWidget.h

UCLASS(Abstract, EditInlineNew)
class UUserWidget : public UWidget, public INamedSlotInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor ColorAndOpacity;  // 0x0110, size 0x10
    UPROPERTY() FGetLinearColor ColorAndOpacityDelegate;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateColor ForegroundColor;  // 0x0130, size 0x28
    UPROPERTY() FGetSlateColor ForegroundColorDelegate;  // 0x0158, size 0x10
    UPROPERTY(BlueprintAssignable) FOnVisibilityChangedEvent OnVisibilityChanged;  // 0x0168, size 0x10
    UUserWidget::FNativeOnVisibilityChangedEvent OnNativeVisibilityChanged;  // 0x0178, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0190, size 0x10
    UPROPERTY(Transient) TArray<UUMGSequencePlayer*> ActiveSequencePlayers;  // 0x01A0, size 0x10
    UPROPERTY(Transient) UUMGSequenceTickManager* AnimationTickManager;  // 0x01B0, size 0x8
    UPROPERTY(Transient) TArray<UUMGSequencePlayer*> StoppedSequencePlayers;  // 0x01B8, size 0x10
    UPROPERTY(Transient) UWidgetTree* WidgetTree;  // 0x01D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Priority;  // 0x01E0, size 0x4
    UPROPERTY(Deprecated) uint8 bSupportsKeyboardFocus : 1;  // 0x01E4, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsFocusable : 1;  // 0x01E4, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bStopAction : 1;  // 0x01E4, mask 0x04
    UPROPERTY() uint8 bHasScriptImplementedTick : 1;  // 0x01E4, mask 0x08
    UPROPERTY() uint8 bHasScriptImplementedPaint : 1;  // 0x01E4, mask 0x10
protected:
    uint8 : 1 bInitialized;  // 0x01E4, not reflected
    uint8 : 1 bStoppingAllAnimations;  // 0x01E4, not reflected
    UPROPERTY(Transient, Instanced) UInputComponent* InputComponent;  // 0x01F8, size 0x8
    UPROPERTY(Transient) TArray<FAnimationEventBinding> AnimationCallbacks;  // 0x0200, size 0x10
private:
    UPROPERTY() TArray<FNamedSlotBinding> NamedSlotBindings;  // 0x01C8, size 0x10
    FVector2D MinimumDesiredSize;  // 0x01E8, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EWidgetTickFrequency TickFrequency;  // 0x01F0, size 0x1
    FAnchors ViewportAnchors;  // 0x0210, not reflected
    FMargin ViewportOffsets;  // 0x0220, not reflected
    FVector2D ViewportAlignment;  // 0x0230, not reflected
    TWeakPtr<SWidget,0> FullScreenWidget;  // 0x0238, not reflected
    FLocalPlayerContext PlayerContext;  // 0x0248, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> CachedWorld;  // 0x0258, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) bool AddToPlayerScreen(int32 ZOrder);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void AddToViewport(int32 ZOrder);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void BindToAnimationEvent(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void BindToAnimationFinished(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void BindToAnimationStarted(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CancelLatentActions();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void FlushAnimations();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) FVector2D GetAlignmentInViewport() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) FAnchors GetAnchorsInViewport() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) float GetAnimationCurrentTime(UWidgetAnimation* InAnimation) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) bool GetIsVisible() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) APlayerCameraManager* GetOwningPlayerCameraManager() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) APawn* GetOwningPlayerPawn() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) bool IsAnimationPlaying(UWidgetAnimation* InAnimation) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) bool IsAnimationPlayingForward(UWidgetAnimation* InAnimation);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) bool IsAnyAnimationPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) bool IsInViewport() const;  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) bool IsInteractable() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsListeningForInputAction(FName ActionName) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayingAnimation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FOnInputAction Callback);  // parameters 0x1C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnAddedToFocusPath(FFocusEvent InFocusEvent);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);  // parameters 0x130
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent) void OnAnimationFinished(UWidgetAnimation* Animation);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent) void OnAnimationStarted(UWidgetAnimation* Animation);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnDragCancelled(const FPointerEvent& PointerEvent, UDragDropOperation* Operation);  // parameters 0x78
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation);  // parameters 0xB0
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);  // parameters 0xB0
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);  // parameters 0x78
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);  // parameters 0xB1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);  // parameters 0xB1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnFocusLost(FFocusEvent InFocusEvent);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);  // parameters 0xF8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);  // parameters 0x110
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);  // parameters 0x138
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseCaptureLost();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnPaint(FPaintContext& Context) const;  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnTouchEnded(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnTouchForceChanged(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnTouchGesture(FGeometry MyGeometry, const FPointerEvent& GestureEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnTouchMoved(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnTouchStarted(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float PauseAnimation(UWidgetAnimation* InAnimation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) UUMGSequencePlayer* PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) UUMGSequencePlayer* PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) UUMGSequencePlayer* PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) UUMGSequencePlayer* PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void PlaySound(USoundBase* SoundToPlay);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RegisterInputComponent();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void RemoveFromViewport();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void ReverseAnimation(UWidgetAnimation* InAnimation);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetAlignmentInViewport(FVector2D Alignment);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetAnchorsInViewport(FAnchors Anchors);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetAnimationCurrentTime(UWidgetAnimation* InAnimation, float InTime);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetColorAndOpacity(FLinearColor InColorAndOpacity);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetDesiredSizeInViewport(FVector2D Size);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetForegroundColor(FSlateColor InForegroundColor);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetInputActionBlocking(bool bShouldBlock);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetInputActionPriority(int32 NewPriority);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetNumLoopsToPlay(UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetOwningPlayer(APlayerController* LocalPlayerController);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetPlaybackSpeed(UWidgetAnimation* InAnimation, float PlaybackSpeed);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void StopAllAnimations();
    UFUNCTION(BlueprintCallable) void StopAnimation(UWidgetAnimation* InAnimation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StopAnimationsAndLatentActions();
    UFUNCTION(BlueprintCallable) void StopListeningForAllInputActions();
    UFUNCTION(BlueprintCallable) void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);  // parameters 0x9
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnbindFromAnimationFinished(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UnbindFromAnimationStarted(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UnregisterInputComponent();

    // Virtual functions that start here:
    //   AddToScreen, Initialize, InitializeInputComponent, InitializeNativeClassData, NativeConstruct
    //   NativeDestruct, NativeIsInteractable, NativeOnAddedToFocusPath, NativeOnAnalogValueChanged
    //   NativeOnCursorQuery, NativeOnDragCancelled, NativeOnDragDetected, NativeOnDragEnter
    //   NativeOnDragLeave, NativeOnDragOver, NativeOnDrop, NativeOnFocusChanging, NativeOnFocusLost
    //   NativeOnFocusReceived, NativeOnInitialized, NativeOnKeyChar, NativeOnKeyDown, NativeOnKeyUp
    //   NativeOnMotionDetected, NativeOnMouseButtonDoubleClick, NativeOnMouseButtonDown
    //   NativeOnMouseButtonUp, NativeOnMouseCaptureLost, NativeOnMouseEnter, NativeOnMouseLeave
    //   NativeOnMouseMove, NativeOnMouseWheel, NativeOnNavigation, NativeOnPreviewKeyDown
    //   NativeOnPreviewMouseButtonDown, NativeOnRemovedFromFocusPath, NativeOnTouchEnded
    //   NativeOnTouchForceChanged, NativeOnTouchGesture, NativeOnTouchMoved, NativeOnTouchStarted
    //   NativePaint, NativePreConstruct, NativeSupportsCustomNavigation, NativeSupportsKeyboardFocus
    //   NativeTick, OnAnimationFinishedPlaying, OnAnimationFinished_Implementation
    //   OnAnimationStartedPlaying, OnAnimationStarted_Implementation, OnLevelRemovedFromWorld
};
