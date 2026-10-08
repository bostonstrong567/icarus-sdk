// /Script/UMG.SlateBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Blueprint/SlateBlueprintLibrary.h

UCLASS()
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D AbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteCoordinate);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static void AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_SlateBrush(const FSlateBrush& A, const FSlateBrush& B);  // parameters 0x111
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D GetAbsoluteSize(const FGeometry& Geometry);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D GetLocalSize(const FGeometry& Geometry);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D GetLocalTopLeft(const FGeometry& Geometry);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsUnderLocation(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D LocalToAbsolute(const FGeometry& Geometry, FVector2D LocalCoordinate);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static void LocalToViewport(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);  // parameters 0x58
    UFUNCTION() static void ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);  // parameters 0x18
    UFUNCTION() static void ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition);  // parameters 0x19
    UFUNCTION() static void ScreenToWidgetLocal(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static float TransformScalarAbsoluteToLocal(const FGeometry& Geometry, float AbsoluteScalar);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static float TransformScalarLocalToAbsolute(const FGeometry& Geometry, float LocalScalar);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D TransformVectorAbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteVector);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D TransformVectorLocalToAbsolute(const FGeometry& Geometry, FVector2D LocalVector);  // parameters 0x48
};
