// /Script/InteractiveToolsFramework.SelectionSet
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/SelectionSet.h

UCLASS(Transient)
class USelectionSet : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(USelectionSet *),FDefaultDelegateUserPolicy> OnModified;  // 0x0028, protected
};
