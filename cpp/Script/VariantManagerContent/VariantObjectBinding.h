// /Script/VariantManagerContent.VariantObjectBinding
// Derives from: UObject
// size 0x90, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/VariantObjectBinding.h

UCLASS()
class UVariantObjectBinding : public UObject
{
public:
    UPROPERTY() FString CachedActorLabel;  // 0x0028, size 0x10
    UPROPERTY() FSoftObjectPath ObjectPtr;  // 0x0038, size 0x18
    UPROPERTY() TLazyObjectPtr<UObject> LazyObjectPtr;  // 0x0050, size 0x1C
    UPROPERTY() TArray<UPropertyValue*> CapturedProperties;  // 0x0070, size 0x10
    UPROPERTY() TArray<FFunctionCaller> FunctionCallers;  // 0x0080, size 0x10
};
