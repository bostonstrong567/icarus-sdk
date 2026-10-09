// /Script/Engine.SoundGroups
// Derives from: UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundGroups.h

UCLASS(Abstract, Config=Engine)
class USoundGroups : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Config) TArray<FSoundGroup> SoundGroupProfiles;  // 0x0028, size 0x10
    TMap<enum ESoundGroup,FSoundGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum ESoundGroup,FSoundGroup,0> > SoundGroupMap;  // 0x0038, not reflected
};
