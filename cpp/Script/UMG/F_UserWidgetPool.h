// /Script/UMG.UserWidgetPool
// size 0x80, declared in Engine/Source/Runtime/UMG/Public/Blueprint/UserWidgetPool.h

USTRUCT()
struct FUserWidgetPool
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) TArray<UUserWidget*> ActiveWidgets;  // 0x0000, size 0x10
    UPROPERTY(Transient) TArray<UUserWidget*> InactiveWidgets;  // 0x0010, size 0x10
    TWeakObjectPtr<UWidget,FWeakObjectPtr> OwningWidget;  // 0x0020, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> OwningWorld;  // 0x0028, not reflected
    TMap<UUserWidget *,TSharedPtr<SWidget,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UUserWidget *,TSharedPtr<SWidget,0>,0> > CachedSlateByWidgetObject;  // 0x0030, not reflected
};
