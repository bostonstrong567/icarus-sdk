// /Script/UMG.BrushBinding
// Derives from: UPropertyBinding > UObject
// size 0x68, declared in Engine/Source/Runtime/UMG/Public/Binding/BrushBinding.h

UCLASS()
class UBrushBinding : public UPropertyBinding
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TOptional<enum UBrushBinding::EConversion> bConversion;  // 0x0060, private

    UFUNCTION() FSlateBrush GetValue() const;  // parameters 0x88
};
