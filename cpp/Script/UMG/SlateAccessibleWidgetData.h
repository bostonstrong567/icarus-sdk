// /Script/UMG.SlateAccessibleWidgetData
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/UMG/Public/Components/SlateWrapperTypes.h

UCLASS()
class USlateAccessibleWidgetData : public UObject
{
public:
    UPROPERTY() bool bCanChildrenBeAccessible;  // 0x0028, size 0x1
    UPROPERTY() ESlateAccessibleBehavior AccessibleBehavior;  // 0x0029, size 0x1
    UPROPERTY() ESlateAccessibleBehavior AccessibleSummaryBehavior;  // 0x002A, size 0x1
    UPROPERTY() FText AccessibleText;  // 0x0030, size 0x18
    UPROPERTY() FGetText AccessibleTextDelegate;  // 0x0048, size 0x10
    UPROPERTY() FText AccessibleSummaryText;  // 0x0058, size 0x18
    UPROPERTY() FGetText AccessibleSummaryTextDelegate;  // 0x0070, size 0x10
};
