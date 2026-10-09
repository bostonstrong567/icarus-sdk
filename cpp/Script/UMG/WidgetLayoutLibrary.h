// /Script/UMG.WidgetLayoutLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h

UCLASS()
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static FVector2D GetMousePositionOnPlatform();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static FVector2D GetMousePositionOnViewport(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) static bool GetMousePositionScaledByDPI(APlayerController* Player, float& LocationX, float& LocationY);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static FGeometry GetPlayerScreenWidgetGeometry(APlayerController* PlayerController);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) static float GetViewportScale(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) static FVector2D GetViewportSize(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FGeometry GetViewportWidgetGeometry(UObject* WorldContextObject);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) static bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative);  // parameters 0x1E
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void RemoveAllWidgets(UObject* WorldContextObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static UBorderSlot* SlotAsBorderSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UCanvasPanelSlot* SlotAsCanvasSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UGridSlot* SlotAsGridSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UOverlaySlot* SlotAsOverlaySlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static USafeZoneSlot* SlotAsSafeBoxSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UScaleBoxSlot* SlotAsScaleBoxSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UScrollBoxSlot* SlotAsScrollBoxSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static USizeBoxSlot* SlotAsSizeBoxSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UUniformGridSlot* SlotAsUniformGridSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UVerticalBoxSlot* SlotAsVerticalBoxSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(UWidget* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UWrapBoxSlot* SlotAsWrapBoxSlot(UWidget* Widget);  // parameters 0x10
};
