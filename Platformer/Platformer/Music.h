#pragma once

#include <SDL/SDL_mixer.h>

class Music
{
public:
	Music();
	~Music();

	friend class AudioManager;

	//n = number of times to loop
	//n == -1 means loop forever
	void play(int n = 1);

	static void stop();

	static void resume();

	static void pause();

private:
	//Give AudioManager access to mMusic
	Mix_Music* mMusic = NULL;
};

