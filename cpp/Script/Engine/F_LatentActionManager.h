// /Script/Engine.LatentActionManager
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Engine/LatentActionManager.h

USTRUCT()
struct FLatentActionManager
{

    // Not reflected:
    TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>,0> > ObjectToActionListMap;  // 0x0000
    TArray<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction *>,TSizedDefaultAllocator<32> >,0> >,TSizedDefaultAllocator<32> > ActionsToRemoveMap;  // 0x0050
};
