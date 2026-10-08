// /Script/Icarus.Pointer
// Derives from: UWidget > UVisual > UObject
// size 0x140, declared in Icarus/Source/Icarus/UI/Pointer.h

UCLASS()
class UPointer : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Tint;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAntiAlias;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Thickness;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Angle;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArrowLength;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeadLength;  // 0x0128, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SPointer,0> Impl;  // 0x0130, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAngle() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetAntiAlias() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetArrowLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHeadLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetThickness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetTint() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAngle(float InDegrees);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAntiAlias(bool bInAntiAlias);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetArrowLength(float InLength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetHeadLength(float InLength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetThickness(float InThickness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTint(FLinearColor InTint);  // parameters 0x10
};
