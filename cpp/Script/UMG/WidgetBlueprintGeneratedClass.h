// /Script/UMG.WidgetBlueprintGeneratedClass
// Derives from: UBlueprintGeneratedClass > UClass > UStruct > UField > UObject
// size 0x368, declared in Engine/Source/Runtime/UMG/Public/Blueprint/WidgetBlueprintGeneratedClass.h

UCLASS()
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
    UPROPERTY() UWidgetTree* WidgetTree;  // 0x0328, size 0x8
    UPROPERTY() uint8 bClassRequiresNativeTick : 1;  // 0x0330, mask 0x01
    UPROPERTY() TArray<FDelegateRuntimeBinding> Bindings;  // 0x0338, size 0x10
    UPROPERTY() TArray<UWidgetAnimation*> Animations;  // 0x0348, size 0x10
    UPROPERTY() TArray<FName> NamedSlots;  // 0x0358, size 0x10
};
