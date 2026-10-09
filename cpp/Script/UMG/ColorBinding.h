// /Script/UMG.ColorBinding
// Derives from: UPropertyBinding > UObject
// size 0x68, declared in Engine/Source/Runtime/UMG/Public/Binding/ColorBinding.h

UCLASS()
class UColorBinding : public UPropertyBinding
{
private:
    TOptional<bool> bNeedsConversion;  // 0x0060, not reflected
public:
    UFUNCTION() FLinearColor GetLinearValue() const;  // parameters 0x10
    UFUNCTION() FSlateColor GetSlateValue() const;  // parameters 0x28
};
