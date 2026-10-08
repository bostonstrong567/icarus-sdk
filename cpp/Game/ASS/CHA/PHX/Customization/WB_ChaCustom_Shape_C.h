// /Game/ASS/CHA/PHX/Customization/WB_ChaCustom_Shape.WB_ChaCustom_Shape_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UWB_ChaCustom_Shape_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* background_disable;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* background_inner;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* background_outer;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cursor_indicator;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isDragging;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Top;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Bottom;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Left;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Right;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Bounds;  // 0x029C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClampedX;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClampedY;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ActorRef;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TopEnable;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BottomEnable;  // 0x02B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RightEnable;  // 0x02B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LeftEnable;  // 0x02B3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExaggerateEnable;  // 0x02B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FMouseMoved MouseMoved;  // 0x02B8, size 0x10

    UFUNCTION(BlueprintCallable) void ActiveControlsCheck(bool Top, bool Left, bool Bottom, bool Right, float& Scaled, float& AbsClamp, float& Baseline);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CursorIndicatorReset();
    UFUNCTION() void ExecuteUbergraph_WB_ChaCustom_Shape(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MouseMoved__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
