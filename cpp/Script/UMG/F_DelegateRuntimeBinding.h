// /Script/UMG.DelegateRuntimeBinding
// size 0x50, declared in Engine/Source/Runtime/UMG/Public/Blueprint/WidgetBlueprintGeneratedClass.h

USTRUCT()
struct FDelegateRuntimeBinding
{
public:
    UPROPERTY() FString ObjectName;  // 0x0000, size 0x10
    UPROPERTY() FName PropertyName;  // 0x0010, size 0x8
    UPROPERTY() FName FunctionName;  // 0x0018, size 0x8
    UPROPERTY() FDynamicPropertyPath SourcePath;  // 0x0020, size 0x28
    UPROPERTY() EBindingKind Kind;  // 0x0048, size 0x1
};
