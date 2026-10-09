// /Script/UMG.CircularThrobber
// Derives from: UWidget > UVisual > UObject
// size 0x1C0, declared in Engine/Source/Runtime/UMG/Public/Components/CircularThrobber.h

UCLASS()
class UCircularThrobber : public UWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumberOfPieces;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Period;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Radius;  // 0x0110, size 0x4
    UPROPERTY(Deprecated) USlateBrushAsset* PieceImage;  // 0x0118, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateBrush Image;  // 0x0120, size 0x88
private:
    UPROPERTY(EditAnywhere, Transient) bool bEnableRadius;  // 0x01A8, size 0x1
    TSharedPtr<SCircularThrobber,0> MyCircularThrobber;  // 0x01B0, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetNumberOfPieces(int32 InNumberOfPieces);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPeriod(float InPeriod);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRadius(float InRadius);  // parameters 0x4
};
