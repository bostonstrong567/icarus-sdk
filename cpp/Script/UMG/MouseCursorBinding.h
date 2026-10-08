// /Script/UMG.MouseCursorBinding
// Derives from: UPropertyBinding > UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Binding/MouseCursorBinding.h

UCLASS()
class UMouseCursorBinding : public UPropertyBinding
{
public:

    UFUNCTION() TEnumAsByte<EMouseCursor> GetValue() const;  // parameters 0x1
};
