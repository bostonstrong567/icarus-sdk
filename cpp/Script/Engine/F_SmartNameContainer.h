// /Script/Engine.SmartNameContainer
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Animation/SmartName.h

USTRUCT()
struct FSmartNameContainer
{

    // Not reflected:
    TMap<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0> > NameMappings;  // 0x0000
};
