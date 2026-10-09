// /Script/InteractiveToolsFramework.SelectionSet
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/SelectionSet.h

UCLASS(Transient)
class USelectionSet : public UObject
{
protected:
    TMulticastDelegate<void __cdecl(USelectionSet *),FDefaultDelegateUserPolicy> OnModified;  // 0x0028, not reflected
};
