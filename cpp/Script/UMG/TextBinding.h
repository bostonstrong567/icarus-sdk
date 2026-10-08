// /Script/UMG.TextBinding
// Derives from: UPropertyBinding > UObject
// size 0x68, declared in Engine/Source/Runtime/UMG/Public/Binding/TextBinding.h

UCLASS()
class UTextBinding : public UPropertyBinding
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TOptional<enum UTextBinding::EConversion> NeedsConversion;  // 0x0060, private

    UFUNCTION() FString GetStringValue() const;  // parameters 0x10
    UFUNCTION() FText GetTextValue() const;  // parameters 0x18
};
