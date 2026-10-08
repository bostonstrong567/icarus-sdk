// /Script/Engine.KismetInputLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetInputLibrary.h

UCLASS()
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void CalibrateTilt();
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_InputChordInputChord(FInputChord A, FInputChord B);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_KeyKey(FKey A, FKey B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetAnalogValue(const FAnalogInputEvent& Input);  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKey GetKey(const FKeyEvent& Input);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetUserIndex(const FKeyEvent& Input);  // parameters 0x3C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText InputChord_GetDisplayName(const FInputChord& Key);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsAltDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsCommandDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsControlDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsLeftAltDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsLeftCommandDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsLeftControlDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsLeftShiftDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsRepeat(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsRightAltDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsRightCommandDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsRightControlDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsRightShiftDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InputEvent_IsShiftDown(const FInputEvent& Input);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Key_GetDisplayName(const FKey& Key);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static EUINavigationAction Key_GetNavigationAction(const FKey& InKey);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static EUINavigationAction Key_GetNavigationActionFromKey(const FKeyEvent& InKeyEvent);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static EUINavigation Key_GetNavigationDirectionFromAnalog(const FAnalogInputEvent& InAnalogEvent);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static EUINavigation Key_GetNavigationDirectionFromKey(const FKeyEvent& InKeyEvent);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsAnalog(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsAxis1D(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsAxis2D(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsAxis3D(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsButtonAxis(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsDigital(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsGamepadKey(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsKeyboardKey(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsModifierKey(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsMouseButton(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsValid(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Key_IsVectorAxis(const FKey& Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D PointerEvent_GetCursorDelta(const FPointerEvent& Input);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKey PointerEvent_GetEffectingButton(const FPointerEvent& Input);  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D PointerEvent_GetGestureDelta(const FPointerEvent& Input);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintPure) static ESlateGesture PointerEvent_GetGestureType(const FPointerEvent& Input);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D PointerEvent_GetLastScreenSpacePosition(const FPointerEvent& Input);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 PointerEvent_GetPointerIndex(const FPointerEvent& Input);  // parameters 0x74
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D PointerEvent_GetScreenSpacePosition(const FPointerEvent& Input);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 PointerEvent_GetTouchpadIndex(const FPointerEvent& Input);  // parameters 0x74
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 PointerEvent_GetUserIndex(const FPointerEvent& Input);  // parameters 0x74
    UFUNCTION(BlueprintCallable, BlueprintPure) static float PointerEvent_GetWheelDelta(const FPointerEvent& Input);  // parameters 0x74
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool PointerEvent_IsMouseButtonDown(const FPointerEvent& Input, FKey MouseButton);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool PointerEvent_IsTouchEvent(const FPointerEvent& Input);  // parameters 0x71
};
