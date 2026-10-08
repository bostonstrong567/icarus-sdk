// /Script/UMG.Throbber
// Derives from: UWidget > UVisual > UObject
// size 0x1B0, declared in Engine/Source/Runtime/UMG/Public/Components/Throbber.h

UCLASS()
class UThrobber : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumberOfPieces;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAnimateHorizontally;  // 0x010C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAnimateVertically;  // 0x010D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAnimateOpacity;  // 0x010E, size 0x1
    UPROPERTY(Deprecated) USlateBrushAsset* PieceImage;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateBrush Image;  // 0x0118, size 0x88

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SThrobber,0> MyThrobber;  // 0x01A0, private

    UFUNCTION(BlueprintCallable) void SetAnimateHorizontally(bool bInAnimateHorizontally);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAnimateOpacity(bool bInAnimateOpacity);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAnimateVertically(bool bInAnimateVertically);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetNumberOfPieces(int32 InNumberOfPieces);  // parameters 0x4
};
