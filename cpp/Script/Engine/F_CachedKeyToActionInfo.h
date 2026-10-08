// /Script/Engine.CachedKeyToActionInfo
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Components/InputComponent.h

USTRUCT()
struct FCachedKeyToActionInfo
{
    UPROPERTY() UPlayerInput* PlayerInput;  // 0x0000, size 0x8

    // Not reflected:
    uint32 KeyMapBuiltForIndex;  // 0x0008
    TMap<FKey,TArray<TSharedPtr<FInputActionBinding,0>,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,0>,TSizedDefaultAllocator<32> >,0> > KeyToActionMap;  // 0x0010
    TArray<TSharedPtr<FInputActionBinding,0>,TSizedDefaultAllocator<32> > AnyKeyToActionMap;  // 0x0060
};
