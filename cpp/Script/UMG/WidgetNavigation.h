// /Script/UMG.WidgetNavigation
// Derives from: UObject
// size 0x100, declared in Engine/Source/Runtime/UMG/Public/Blueprint/WidgetNavigation.h

UCLASS()
class UWidgetNavigation : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FWidgetNavigationData Up;  // 0x0028, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FWidgetNavigationData Down;  // 0x004C, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FWidgetNavigationData Left;  // 0x0070, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FWidgetNavigationData Right;  // 0x0094, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FWidgetNavigationData Next;  // 0x00B8, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FWidgetNavigationData Previous;  // 0x00DC, size 0x24
};
