// /Script/UMG.PropertyBinding
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Binding/PropertyBinding.h

UCLASS()
class UPropertyBinding : public UObject
{
public:
    UPROPERTY(Transient) TWeakObjectPtr<UObject> SourceObject;  // 0x0028, size 0x8
    UPROPERTY() FDynamicPropertyPath SourcePath;  // 0x0030, size 0x28
    UPROPERTY() FName DestinationProperty;  // 0x0058, size 0x8

    // Virtual functions that start here:
    //   Bind, IsSupportedDestination, IsSupportedSource
};
