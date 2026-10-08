// /Script/UMG.VisibilityBinding
// Derives from: UPropertyBinding > UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Binding/VisibilityBinding.h

UCLASS()
class UVisibilityBinding : public UPropertyBinding
{
public:

    UFUNCTION() ESlateVisibility GetValue() const;  // parameters 0x1
};
