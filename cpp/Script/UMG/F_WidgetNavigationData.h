// /Script/UMG.WidgetNavigationData
// size 0x24, declared in Engine/Source/Runtime/UMG/Public/Blueprint/WidgetNavigation.h

USTRUCT()
struct FWidgetNavigationData
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EUINavigationRule Rule;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName WidgetToFocus;  // 0x0004, size 0x8
    UPROPERTY(Instanced) TWeakObjectPtr<UWidget> Widget;  // 0x000C, size 0x8
    UPROPERTY() FCustomWidgetNavigationDelegate CustomDelegate;  // 0x0014, size 0x10
};
