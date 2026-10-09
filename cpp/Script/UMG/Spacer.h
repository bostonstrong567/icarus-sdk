// /Script/UMG.Spacer
// Derives from: UWidget > UVisual > UObject
// size 0x120, declared in Engine/Source/Runtime/UMG/Public/Components/Spacer.h

UCLASS()
class USpacer : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D Size;  // 0x0108, size 0x8
protected:
    TSharedPtr<SSpacer,0> MySpacer;  // 0x0110, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetSize(FVector2D InSize);  // parameters 0x8
};
