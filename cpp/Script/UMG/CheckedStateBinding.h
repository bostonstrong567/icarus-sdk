// /Script/UMG.CheckedStateBinding
// Derives from: UPropertyBinding > UObject
// size 0x68, declared in Engine/Source/Runtime/UMG/Public/Binding/CheckedStateBinding.h

UCLASS()
class UCheckedStateBinding : public UPropertyBinding
{
private:
    TOptional<enum UCheckedStateBinding::EConversion> bConversion;  // 0x0060, not reflected
public:
    UFUNCTION() ECheckBoxState GetValue() const;  // parameters 0x1
};
